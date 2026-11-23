//
#ifndef T1CardItem_h
#define T1CardItem_h
@import Foundation;

#include "T1CardContainerView.h"

@class NSObject, NSString, TFNTwitterCardContext;

@interface T1CardItem : NSObject

@property (retain, nonatomic) TFNTwitterCardContext *cardContext;
@property (retain, nonatomic) T1CardContainerView *cardContainerView;
@property (copy, nonatomic) NSString *scribeComponent;

/* instance methods */

@end

#endif /* T1CardItem_h */
