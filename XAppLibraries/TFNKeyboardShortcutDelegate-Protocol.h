//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
