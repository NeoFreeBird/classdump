//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNUndoableTextInputHelper_h
#define TFNUndoableTextInputHelper_h
@import Foundation;

#include "TFNUndoableTextInput-Protocol.h"

@class NSObject;

@interface TFNUndoableTextInputHelper : NSObject {
    /* instance variables */
    id <TFNUndoableTextInput> _textControl;
    _Bool _settingText;
    _Bool _settingAttributedText;
}

/* instance methods */
- (id)init;
- (id)initWithUndoableTextInput:(id)input;
- (void)setText:(id)text undoMode:(unsigned long long)mode undoActionName:(id)name withBlock:(id /* block */)block;
- (void)setAttributedText:(id)text undoMode:(unsigned long long)mode undoActionName:(id)name withBlock:(id /* block */)block;

@end

#endif /* TFNUndoableTextInputHelper_h */
