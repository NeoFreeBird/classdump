//
#ifndef TUCMediaComponentViewModel_h
#define TUCMediaComponentViewModel_h
@import Foundation;

#include "TUCMediaComponentModel.h"

@class NSObject, TFSTwitterEntityMedia;

@interface TUCMediaComponentViewModel : NSObject

@property (readonly, nonatomic) TFSTwitterEntityMedia *mediaEntity;
@property (readonly, nonatomic) TUCMediaComponentModel *mediaComponent;

/* instance methods */
- (id)initWithMediaComponent:(id)component;
- (id)init;

@end

#endif /* TUCMediaComponentViewModel_h */
