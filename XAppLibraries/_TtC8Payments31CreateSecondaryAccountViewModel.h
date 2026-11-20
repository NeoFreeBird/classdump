//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments31CreateSecondaryAccountViewModel_h
#define _TtC8Payments31CreateSecondaryAccountViewModel_h
@import Foundation;

@class Payments.CreateSecondaryAccountFlow, _$s19GraphQLCachedModels4UserVMn ?, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface Payments.CreateSecondaryAccountViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Payments.CreateSecondaryAccountFlow flow;
    Swift.String idempotencyKey;
    nominal type descriptor for GraphQLCachedModels.User ? inviteeUser;
    Swift.String? dba;
    Swift.String? nickname;
}

@end

#endif /* _TtC8Payments31CreateSecondaryAccountViewModel_h */
