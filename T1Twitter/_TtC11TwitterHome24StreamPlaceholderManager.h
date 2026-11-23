//
#ifndef _TtC11TwitterHome24StreamPlaceholderManager_h
#define _TtC11TwitterHome24StreamPlaceholderManager_h
@import Foundation;

@class NSObject, Swift.Bool, _$sSa -> TwitterHome.StreamPlaceholder, _$sSaySo8NSObject_pG, _$sSbSo8NSObject_p_ _$ss5Int64VMn _$stcSg, _$ss5Int64VMn, _$syycSg;

@interface TwitterHome.StreamPlaceholderManager : NSObject { // (Swift)
    /* instance variables */
    (() -> ())? onDidUpdate;
    Swift.Array -> TwitterHome.StreamPlaceholder placeholders;
    nominal type descriptor for Swift.Int64 stagedRevealHeroStatusID;
    Swift.Bool__C.NSObject first-element-marker  nominal type descriptor for Swift.Int64 _$stcSg heroMatcher;
    [__C.NSObject] stagedRevealTrailingPlaceholders;
    Swift.Bool stagedRevealScheduled;
}

/* class methods */
+ (id)didUpdateNotification;

/* instance methods */
- (id)init;

@end

#endif /* _TtC11TwitterHome24StreamPlaceholderManager_h */
