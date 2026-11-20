//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift16URLItemShareable_h
#define _TtC14T1TwitterSwift16URLItemShareable_h
@import Foundation;

#include "TSCLimitedActionTypesProvidable-Protocol.h"
#include "TSCOffPlatformShareable-Protocol.h"
#include "TSCShareable-Protocol.h"

@class NSNumber, NSObject, NSString, _$s10Foundation3URLVMn;

@interface T1TwitterSwift.URLItemShareable : NSObject <TSCShareable, TSCOffPlatformShareable, TSCLimitedActionTypesProvidable> { // (Swift)
    /* instance variables */
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

#endif /* _TtC14T1TwitterSwift16URLItemShareable_h */
