//
#ifndef TFNMenuSheetTrayRendering_Protocol_h
#define TFNMenuSheetTrayRendering_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuSheetTrayRendering <NSObject>

@required

/* required instance methods */
- (_Bool)presentTrayForMenuSheet:(id)sheet fromViewController:(id)controller;
- (_Bool)presentTrayForMenuSheet:(id)sheet fromViewController:(id)controller;

@optional

@end

#endif /* TFNMenuSheetTrayRendering_Protocol_h */
