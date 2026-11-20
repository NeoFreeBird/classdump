//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP14TFSTwitterCore20TFSTwitterAccountAds__Protocol_h
#define _TtP14TFSTwitterCore20TFSTwitterAccountAds__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol TFSTwitterCore.TFSTwitterAccountAds <NSObject>

@required

@property (readonly, nonatomic) long long advertiserAccountType;
@property (readonly, copy, nonatomic) NSArray *advertiserAccountServiceLevels;
@property (readonly, nonatomic) _Bool isIDFASystemPromptKillSwitchEnabled;

@optional

@end

#endif /* _TtP14TFSTwitterCore20TFSTwitterAccountAds__Protocol_h */
