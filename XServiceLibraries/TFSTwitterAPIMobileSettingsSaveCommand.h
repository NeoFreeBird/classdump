//
#ifndef TFSTwitterAPIMobileSettingsSaveCommand_h
#define TFSTwitterAPIMobileSettingsSaveCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSDictionary, NSString;

@interface TFSTwitterAPIMobileSettingsSaveCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (nonatomic) _Bool isForPush;
@property (nonatomic) long long userID;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *deviceUDID;
@property (copy, nonatomic) NSString *osVersion;
@property (nonatomic) long long environment;
@property (copy, nonatomic) NSString *pushTemplateChecksum;
@property (copy, nonatomic) NSString *base64PushToken;
@property (nonatomic) unsigned long long pushProtocolVersion;
@property (copy, nonatomic) NSDictionary *pushSettings;
@property (copy, nonatomic) NSString *smsTemplateChecksum;
@property (copy, nonatomic) NSDictionary *smsSettings;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id isForPush:(_Bool)push userID:(long long)id appID:(id)id deviceUDID:(id)udid osVersion:(id)version environment:(id)environment responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id userID:(long long)id appID:(id)id deviceUDID:(id)udid osVersion:(id)version pushTemplateChecksum:(id)checksum base64PushToken:(id)token pushProtocolVersion:(unsigned long long)version pushSettings:(id)settings responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id userID:(long long)id appID:(id)id deviceUDID:(id)udid osVersion:(id)version smsTemplateChecksum:(id)checksum smsSettings:(id)settings responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMobileSettingsSaveCommand_h */
