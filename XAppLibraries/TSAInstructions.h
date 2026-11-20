//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSAInstructions_h
#define TSAInstructions_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TSAInstructions : NSObject

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *messageText;

/* instance methods */

@end

#endif /* TSAInstructions_h */
