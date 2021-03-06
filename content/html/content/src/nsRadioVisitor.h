/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef _nsRadioVisitor_h__
#define _nsRadioVisitor_h__

#include "mozilla/Attributes.h"
#include "nsIRadioVisitor.h"

class nsIFormControl;

/**
 * nsRadioVisitor is the base class implementing nsIRadioVisitor and inherited
 * by all radio visitors.
 */
class nsRadioVisitor : public nsIRadioVisitor
{
public:
  nsRadioVisitor() { }
  virtual ~nsRadioVisitor() { }

  NS_DECL_ISUPPORTS

  virtual bool Visit(nsIFormControl* aRadio) MOZ_OVERRIDE = 0;
};

/**
 * The following declarations are radio visitors inheriting from nsRadioVisitor.
 */

/**
 * nsRadioSetCheckedChangedVisitor is calling SetCheckedChanged with the given
 * parameter to all radio elements in the group.
 */
class nsRadioSetCheckedChangedVisitor : public nsRadioVisitor
{
public:
  nsRadioSetCheckedChangedVisitor(bool aCheckedChanged)
    : mCheckedChanged(aCheckedChanged)
    { }

  virtual bool Visit(nsIFormControl* aRadio) MOZ_OVERRIDE;

protected:
  bool mCheckedChanged;
};

/**
 * nsRadioGetCheckedChangedVisitor is getting the current checked changed value.
 * Getting it from one radio element is the group is enough given that all
 * elements should have the same value.
 */
class nsRadioGetCheckedChangedVisitor : public nsRadioVisitor
{
public:
  nsRadioGetCheckedChangedVisitor(bool* aCheckedChanged,
                                  nsIFormControl* aExcludeElement)
    : mCheckedChanged(aCheckedChanged)
    , mExcludeElement(aExcludeElement)
    { }

  virtual bool Visit(nsIFormControl* aRadio) MOZ_OVERRIDE;

protected:
  bool* mCheckedChanged;
  nsIFormControl* mExcludeElement;
};

/**
 * nsRadioSetValueMissingState is calling SetValueMissingState with the given
 * parameter to all radio elements in the group.
 * It is also calling ContentStatesChanged if needed.
 */
class nsRadioSetValueMissingState : public nsRadioVisitor
{
public:
  nsRadioSetValueMissingState(nsIFormControl* aExcludeElement,
                              bool aValidity, bool aNotify)
    : mExcludeElement(aExcludeElement)
    , mValidity(aValidity)
    , mNotify(aNotify)
    { }

  virtual bool Visit(nsIFormControl* aRadio) MOZ_OVERRIDE;

protected:
  nsIFormControl* mExcludeElement;
  bool mValidity;
  bool mNotify;
};

#endif // _nsRadioVisitor_h__

