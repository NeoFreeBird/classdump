//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterScribeFlushAccountValueProvider_h
#define TFNTwitterScribeFlushAccountValueProvider_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TFNTwitterScribe.h"
#include "TFNTwitterScribeFlushAccountValueProviding-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterScribeFlushAccountValueProvider : NSObject <TFNTwitterScribeFlushAccountValueProviding> {
    /* instance variables */
    TFNTwitterAccount *_account;
}

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) TFNTwitterScribe *scribe;
@property (readonly, nonatomic) long long userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;

@end

#endif /* TFNTwitterScribeFlushAccountValueProvider_h */
