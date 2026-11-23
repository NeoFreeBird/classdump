//
#ifndef TSURLShareable_h
#define TSURLShareable_h
@import Foundation;

#include "TSCLimitedActionTypesProvidable-Protocol.h"
#include "TSCOffPlatformShareable-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TSURLShareable : NSObject <TSCOffPlatformShareable, TSCLimitedActionTypesProvidable> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 shareURL;
    @40@0:8:16@24@32 parameterID;
}

@property (nonatomic, readonly) NSNumber *scribeParameterID;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) _Bool isPrivateOrNonCompliant;
@property (nonatomic, readonly) NSString *title;

/* instance methods */
- (id)initWithShareURL:(id)url scribeParameterID:(id)id;
- (id)urlToTwitterFor:(unsigned long long)_for;
- (void)setShareTokenInURLEnabled:(_Bool)urlenabled;
- (unsigned long long)limitedActionTypesFor:(id)_for scribeContext:(id)context;
- (id)init;

@end

#endif /* TSURLShareable_h */
