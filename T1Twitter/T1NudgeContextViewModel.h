//
#ifndef T1NudgeContextViewModel_h
#define T1NudgeContextViewModel_h
@import Foundation;

@class NSObject, NSString;

@interface T1NudgeContextViewModel : NSObject

@property (readonly, nonatomic) NSString *speedbumpTitle;

/* instance methods */
- (id)initSpeedbumpViewWithTitle:(id)title;

@end

#endif /* T1NudgeContextViewModel_h */
