//
#ifndef TFNKeyboardShortcutDelegate_Protocol_h
#define TFNKeyboardShortcutDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNKeyboardShortcutDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)handleSelectKeyCommand;
- (void)handleBackKeyCommand;
- (void)handleBackArrowKeyCommand;
- (void)handleForwardKeyCommand;
- (void)handleCloseKeyCommand;
- (void)handleEscapeKeyCommand;
- (void)handleRefreshKeyCommand;
- (void)handlePreviousTabKeyCommand;
- (void)handleNextTabKeyCommand;
- (void)handlePreviousKeyCommand;
- (void)handleNextKeyCommand;
- (void)handlePageUpKeyCommand;
- (void)handlePageDownKeyCommand;
- (void)handleLineUpKeyCommand;
- (void)handleLineDownKeyCommand;
- (void)handleTopKeyCommand;
- (void)handleBottomKeyCommand;

@end

#endif /* TFNKeyboardShortcutDelegate_Protocol_h */
