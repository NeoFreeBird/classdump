//
#ifndef TFNUndoableTextInput_Protocol_h
#define TFNUndoableTextInput_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSAttributedString, NSString, NSUndoManager;

@protocol TFNUndoableTextInput <NSObject>

@required

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) NSUndoManager *undoManager;

/* required instance methods */
- (void)setText:(id)text undoMode:(unsigned long long)mode undoActionName:(id)name;
- (void)setAttributedText:(id)text undoMode:(unsigned long long)mode undoActionName:(id)name;

@optional

@end

#endif /* TFNUndoableTextInput_Protocol_h */
