//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
