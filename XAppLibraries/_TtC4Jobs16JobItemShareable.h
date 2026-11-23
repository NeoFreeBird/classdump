//
#ifndef _TtC4Jobs16JobItemShareable_h
#define _TtC4Jobs16JobItemShareable_h
@import Foundation;

#include "TSCLimitedActionTypesProvidable-Protocol.h"
#include "TSCOffPlatformShareable-Protocol.h"
#include "TSCShareable-Protocol.h"

@class NSNumber, NSObject, NSString, _$s10Foundation3URLVMn, _$s14TFSTwitterCore8JobEntryVMn;

@interface Jobs.JobItemShareable : NSObject <TSCShareable, TSCOffPlatformShareable, TSCLimitedActionTypesProvidable> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.JobEntry job;
    nominal type descriptor for Foundation.URL shareURL;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSNumber *scribeParameterID;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) _Bool isPrivateOrNonCompliant;

/* instance methods */
- (unsigned long long)limitedActionTypesFor:(id)_for scribeContext:(id)context;
- (id)urlToTwitterFor:(unsigned long long)_for;
- (void)setShareTokenInURLEnabled:(_Bool)urlenabled;
- (id)init;

@end

#endif /* _TtC4Jobs16JobItemShareable_h */
