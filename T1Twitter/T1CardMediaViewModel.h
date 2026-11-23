//
#ifndef T1CardMediaViewModel_h
#define T1CardMediaViewModel_h
@import Foundation;

#include "T1InlineMediaViewModel-Protocol.h"

@class NSObject, TFCImageSpec;

@interface T1CardMediaViewModel : NSObject

@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) TFCImageSpec *imageSpec;
@property (readonly, nonatomic) id <T1InlineMediaViewModel> inlineMediaViewModel;

/* instance methods */
- (id)init;
- (id)initWithMediaType:(unsigned long long)type imageSpec:(id)spec inlineMediaViewModel:(id)model;

@end

#endif /* T1CardMediaViewModel_h */
