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
