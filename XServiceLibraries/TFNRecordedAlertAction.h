//
#ifndef TFNRecordedAlertAction_h
#define TFNRecordedAlertAction_h
@import Foundation;

@class NSObject, UIAlertAction;

@interface TFNRecordedAlertAction : NSObject

@property (readonly, weak, nonatomic) UIAlertAction *alertAction;
@property (readonly, copy, nonatomic) id /* block */ handler;

/* instance methods */
- (id)initWithAlertAction:(id)action handler:(id /* block */)handler;

@end

#endif /* TFNRecordedAlertAction_h */
