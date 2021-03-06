# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this file,
# You can obtain one at http://mozilla.org/MPL/2.0/.

from __future__ import unicode_literals

import string

makefile_template = """# THIS FILE IS AUTOGENERATED BY ${caller} - DO NOT EDIT

${files}
"""

mozbuild_template = """# THIS FILE IS AUTOGENERATED BY ${caller} - DO NOT EDIT

${dirs}
"""

reftest_template = """# THIS FILE IS AUTOGENERATED BY ${caller} - DO NOT EDIT

${reftests}
"""



def makefileString(entries):
    if not len(entries):
        return "  $(NULL)"
    return "\n".join(["  %s \\" % (entry, ) for entry in entries]) + "\n  $(NULL)"


def assignList(variable, entries):
    return "%s := \\\n%s" % (variable, makefileString(entries))


def mozbuildDirs(dirs):
    """Obtain a DIRS assignment string for mozbuild files."""
    parts = ['DIRS += [']
    for d in dirs:
        parts.append("    '%s'," % d)
    parts.append(']')

    return '\n'.join(parts)

def substMakefile(caller, files):
    return string.Template(makefile_template).substitute({
        "caller": caller,
        "files": assignList("MOCHITEST_FILES", files) if files else ""
    })


def substMozbuild(caller, dirs):
    return string.Template(mozbuild_template).substitute({
        "caller": caller,
        "dirs": mozbuildDirs(dirs),
    })


def substReftestList(caller, tests):
    def reftests(tests):
        return "\n".join(" ".join(line) for line in tests)

    return string.Template(reftest_template).substitute({
        "caller": caller,
        "reftests": reftests(tests),
    })

