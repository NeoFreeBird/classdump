//
#ifndef T1HighQualityImagesUploadSettings_h
#define T1HighQualityImagesUploadSettings_h
@import Foundation;

#include "TTMUploadHighQualityImagesSettingsProvider-Protocol.h"

@class NSNumber, NSObject, NSString, TFNTwitterAccount, TNLCommunicationAgent;
@protocol OS_dispatch_queue;

@interface T1HighQualityImagesUploadSettings : NSObject <TTMUploadHighQualityImagesSettingsProvider>

@property (readonly, nonatomic) TNLCommunicationAgent *communicationAgent;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) _Bool hasCellularInterface;
@property (retain, nonatomic) NSNumber *internalCurrentValueNumber;
@property (readonly) _Bool shouldUploadHighQualityImages;
@property long long currentValue;
@property (weak, nonatomic) TFNTwitterAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedSettings;

/* instance methods */
- (id)init;
- (id)initInternalWithCommunicationAgent:(id)agent;

@end

#endif /* T1HighQualityImagesUploadSettings_h */
