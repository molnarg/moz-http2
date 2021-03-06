# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

# These files are managed in the android-sync repo. Do not modify directly, or your changes will be lost.
BACKGROUND_TESTS_JAVA_FILES := \
  src/announcements/TestAnnouncementsBroadcastService.java \
  src/common/TestAndroidLogWriters.java \
  src/common/TestBrowserContractHelpers.java \
  src/common/TestDateUtils.java \
  src/common/TestUtils.java \
  src/common/TestWaitHelper.java \
  src/db/AndroidBrowserRepositoryTestCase.java \
  src/db/TestAndroidBrowserBookmarksRepository.java \
  src/db/TestAndroidBrowserHistoryDataExtender.java \
  src/db/TestAndroidBrowserHistoryRepository.java \
  src/db/TestBookmarks.java \
  src/db/TestCachedSQLiteOpenHelper.java \
  src/db/TestClientsDatabase.java \
  src/db/TestClientsDatabaseAccessor.java \
  src/db/TestFennecTabsRepositorySession.java \
  src/db/TestFennecTabsStorage.java \
  src/db/TestFormHistoryRepositorySession.java \
  src/db/TestPasswordsRepository.java \
  src/healthreport/MockDatabaseEnvironment.java \
  src/healthreport/MockHealthReportDatabaseStorage.java \
  src/healthreport/MockHealthReportSQLiteOpenHelper.java \
  src/healthreport/MockProfileInformationCache.java \
  src/healthreport/prune/TestHealthReportPruneService.java \
  src/healthreport/prune/TestPrunePolicyDatabaseStorage.java \
  src/healthreport/TestEnvironmentBuilder.java \
  src/healthreport/TestHealthReportBroadcastService.java \
  src/healthreport/TestHealthReportDatabaseStorage.java \
  src/healthreport/TestHealthReportGenerator.java \
  src/healthreport/TestHealthReportProvider.java \
  src/healthreport/TestHealthReportSQLiteOpenHelper.java \
  src/healthreport/TestProfileInformationCache.java \
  src/healthreport/upload/TestHealthReportUploadService.java \
  src/helpers/AndroidSyncTestCase.java \
  src/helpers/BackgroundServiceTestCase.java \
  src/helpers/DBHelpers.java \
  src/helpers/DBProviderTestCase.java \
  src/helpers/FakeProfileTestCase.java \
  src/sync/helpers/BookmarkHelpers.java \
  src/sync/helpers/DefaultBeginDelegate.java \
  src/sync/helpers/DefaultCleanDelegate.java \
  src/sync/helpers/DefaultDelegate.java \
  src/sync/helpers/DefaultFetchDelegate.java \
  src/sync/helpers/DefaultFinishDelegate.java \
  src/sync/helpers/DefaultGuidsSinceDelegate.java \
  src/sync/helpers/DefaultSessionCreationDelegate.java \
  src/sync/helpers/DefaultStoreDelegate.java \
  src/sync/helpers/ExpectBeginDelegate.java \
  src/sync/helpers/ExpectBeginFailDelegate.java \
  src/sync/helpers/ExpectFetchDelegate.java \
  src/sync/helpers/ExpectFetchSinceDelegate.java \
  src/sync/helpers/ExpectFinishDelegate.java \
  src/sync/helpers/ExpectFinishFailDelegate.java \
  src/sync/helpers/ExpectGuidsSinceDelegate.java \
  src/sync/helpers/ExpectInvalidRequestFetchDelegate.java \
  src/sync/helpers/ExpectInvalidTypeStoreDelegate.java \
  src/sync/helpers/ExpectManyStoredDelegate.java \
  src/sync/helpers/ExpectNoGUIDsSinceDelegate.java \
  src/sync/helpers/ExpectStoreCompletedDelegate.java \
  src/sync/helpers/ExpectStoredDelegate.java \
  src/sync/helpers/HistoryHelpers.java \
  src/sync/helpers/PasswordHelpers.java \
  src/sync/helpers/SessionTestHelper.java \
  src/sync/helpers/SimpleSuccessBeginDelegate.java \
  src/sync/helpers/SimpleSuccessCreationDelegate.java \
  src/sync/helpers/SimpleSuccessFetchDelegate.java \
  src/sync/helpers/SimpleSuccessFinishDelegate.java \
  src/sync/helpers/SimpleSuccessStoreDelegate.java \
  src/sync/TestAccountPickler.java \
  src/sync/TestClientsStage.java \
  src/sync/TestConfigurationMigrator.java \
  src/sync/TestResetting.java \
  src/sync/TestSendTabData.java \
  src/sync/TestStoreTracking.java \
  src/sync/TestSyncAccounts.java \
  src/sync/TestSyncAuthenticatorService.java \
  src/sync/TestSyncConfiguration.java \
  src/sync/TestTabsRecord.java \
  src/sync/TestUpgradeRequired.java \
  src/sync/TestWebURLFinder.java \
  src/telemetry/TestTelemetryRecorder.java \
  src/testhelpers/BaseMockServerSyncStage.java \
  src/testhelpers/CommandHelpers.java \
  src/testhelpers/DefaultGlobalSessionCallback.java \
  src/testhelpers/JPakeNumGeneratorFixed.java \
  src/testhelpers/MockAbstractNonRepositorySyncStage.java \
  src/testhelpers/MockClientsDatabaseAccessor.java \
  src/testhelpers/MockClientsDataDelegate.java \
  src/testhelpers/MockGlobalSession.java \
  src/testhelpers/MockPrefsGlobalSession.java \
  src/testhelpers/MockRecord.java \
  src/testhelpers/MockServerSyncStage.java \
  src/testhelpers/MockSharedPreferences.java \
  src/testhelpers/WaitHelper.java \
  src/testhelpers/WBORepository.java \
  $(NULL)

BACKGROUND_TESTS_RES_FILES := \
  res/drawable-hdpi/icon.png \
  res/drawable-ldpi/icon.png \
  res/drawable-mdpi/icon.png \
  res/layout/main.xml \
  res/values/strings.xml \
  $(NULL)

