//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDFriendlyObstruction_h
#define GADOMIDFriendlyObstruction_h
@import Foundation;

@class NSObject, NSString, UIView;

@interface GADOMIDFriendlyObstruction : NSObject

@property (readonly, weak, nonatomic) UIView *obstructionView;
@property (readonly, nonatomic) NSString *obstructionViewClass;
@property (readonly, nonatomic) unsigned long long purpose;
@property (readonly, nonatomic) NSString *detailedReason;

/* instance methods */
- (id)initWithObstructionView:(id)view purpose:(unsigned long long)purpose detailedReason:(id)reason;

@end

#endif /* GADOMIDFriendlyObstruction_h */
