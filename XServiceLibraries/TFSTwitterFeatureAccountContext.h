//
#ifndef TFSTwitterFeatureAccountContext_h
#define TFSTwitterFeatureAccountContext_h
@import Foundation;

#include "TFSModelContext.h"
#include "TFSTwitterFeature-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterFeatureAccountContext : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 accountContext;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) TFSModelContext *modelContext;
@property (nonatomic, weak) id <TFSTwitterFeature> feature;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterFeatureAccountContext_h */
