//
#ifndef _TtP14TFSTwitterCore20TFSTwitterAccountAds__Protocol_h
#define _TtP14TFSTwitterCore20TFSTwitterAccountAds__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol TFSTwitterCore.TFSTwitterAccountAds <NSObject>

@required

@property (nonatomic, readonly) long long advertiserAccountType;
@property (nonatomic, readonly) NSArray *advertiserAccountServiceLevels;
@property (nonatomic, readonly) _Bool isIDFASystemPromptKillSwitchEnabled;

@optional

@end

#endif /* _TtP14TFSTwitterCore20TFSTwitterAccountAds__Protocol_h */
