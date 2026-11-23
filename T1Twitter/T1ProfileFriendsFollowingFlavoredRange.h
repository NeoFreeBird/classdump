//
#ifndef T1ProfileFriendsFollowingFlavoredRange_h
#define T1ProfileFriendsFollowingFlavoredRange_h
@import Foundation;

@class NSString, TFSFlavoredRange;

@interface T1ProfileFriendsFollowingFlavoredRange : TFSFlavoredRange

@property (readonly, nonatomic) NSString *accessibilityHint;

/* instance methods */
- (id)initWithRangeValue:(struct _NSRange { unsigned long long x0; unsigned long long x1; })value accessibilityHint:(id)hint;

@end

#endif /* T1ProfileFriendsFollowingFlavoredRange_h */
