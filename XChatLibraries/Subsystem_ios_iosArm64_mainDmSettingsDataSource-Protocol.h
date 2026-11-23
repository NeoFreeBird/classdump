//
#ifndef Subsystem_ios_iosArm64_mainDmSettingsDataSource_Protocol_h
#define Subsystem_ios_iosArm64_mainDmSettingsDataSource_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDmSettingsDataSource

@required

/* required instance methods */
- (id)fetchSettings;
- (id)observeAllowDmsFrom;
- (id)observeReadReceiptsEnabled;
- (id)observeSettings;
- (void)setAllowDmsFromValue:(id)value completionHandler:(id /* block */)handler;
- (void)setAllowDmsFromValue:(id)value completionHandler:(id /* block */)handler;
- (void)setReadReceiptsEnabledEnabled:(_Bool)enabled completionHandler:(id /* block */)handler;
- (void)setReadReceiptsEnabledEnabled:(_Bool)enabled completionHandler:(id /* block */)handler;
- (id)updateSettingsSettings:(id)settings error:(id *)error;
- (id)updateSettingsSettings:(id)settings error:(id *)error;
- (id)updateSettingsAndReturnError:(id *)error transform:(id /* block */)transform;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDmSettingsDataSource_Protocol_h */
