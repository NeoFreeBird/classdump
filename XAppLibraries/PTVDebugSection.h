//
#ifndef PTVDebugSection_h
#define PTVDebugSection_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVDebugSection : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *rows;

/* class methods */
+ (id)sectionWithTitle:(id)title rows:(id)rows;

/* instance methods */

@end

#endif /* PTVDebugSection_h */
