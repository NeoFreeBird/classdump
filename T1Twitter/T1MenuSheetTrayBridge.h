//
#ifndef T1MenuSheetTrayBridge_h
#define T1MenuSheetTrayBridge_h
@import Foundation;

#include "TFNMenuSheetTrayRendering-Protocol.h"

@class NSObject;

@interface T1MenuSheetTrayBridge : NSObject <TFNMenuSheetTrayRendering> // (Swift)

/* instance methods */
- (_Bool)presentTrayForMenuSheet:(id)sheet fromViewController:(id)controller;
- (id)init;

@end

#endif /* T1MenuSheetTrayBridge_h */
