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
