//
#ifndef PTVDebugRow_h
#define PTVDebugRow_h
@import Foundation;

@class NSObject, NSString;

@interface PTVDebugRow : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *detail;
@property (copy, nonatomic) id /* block */ tapHandler;

/* class methods */
+ (id)rowWithText:(id)text;
+ (id)rowWithText:(id)text detail:(id)detail;
+ (id)rowWithText:(id)text tapHandler:(id /* block */)handler;
+ (id)rowWithText:(id)text detail:(id)detail tapHandler:(id /* block */)handler;

/* instance methods */

@end

#endif /* PTVDebugRow_h */
