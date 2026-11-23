//
#ifndef _TtC4Grok17GrokUsersProvider_h
#define _TtC4Grok17GrokUsersProvider_h
@import Foundation;

@class Swift.Bool, _$s20TwitterActionService0bC0CMn ?, _$s7Combine9PublishedVMn _$s13GraphQLModels12UserFragmentCMn ?, _$sSS, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface Grok.GrokUsersProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 grokUserId;
    Swift.String accountID;
    nominal type descriptor for Swift.Int64 userID;
    nominal type descriptor for Combine.Published nominal type descriptor for GraphQLModels.UserFragment ? _grokUser;
    nominal type descriptor for Combine.Published nominal type descriptor for GraphQLModels.UserFragment ? _me;
    Swift.Bool loading;
    nominal type descriptor for TwitterActionService.ActionService ? $__lazy_storage_$_actionService;
}

@end

#endif /* _TtC4Grok17GrokUsersProvider_h */
