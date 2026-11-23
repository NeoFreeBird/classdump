//
#ifndef CashTagShareable_h
#define CashTagShareable_h
@import Foundation;

#include "TSCLimitedActionTypesProvidable-Protocol.h"
#include "TSCOffPlatformShareable-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface CashTagShareable : NSObject <TSCOffPlatformShareable, TSCLimitedActionTypesProvidable> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *shareURL;
}

@property (nonatomic, readonly) NSString *ticker;
@property (nonatomic, readonly) NSString *restId;
@property (nonatomic, readonly) NSNumber *scribeParameterID;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) _Bool isPrivateOrNonCompliant;
@property (nonatomic, readonly) NSString *title;

/* instance methods */
- (id)urlToTwitterFor:(unsigned long long)_for;
- (void)setShareTokenInURLEnabled:(_Bool)urlenabled;
- (unsigned long long)limitedActionTypesFor:(id)_for scribeContext:(id)context;
- (id)init;

@end

#endif /* CashTagShareable_h */
