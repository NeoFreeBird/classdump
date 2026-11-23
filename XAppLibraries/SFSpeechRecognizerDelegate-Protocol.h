//
#ifndef SFSpeechRecognizerDelegate_Protocol_h
#define SFSpeechRecognizerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol SFSpeechRecognizerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)speechRecognizer:(id)recognizer availabilityDidChange:(_Bool)change;

@end

#endif /* SFSpeechRecognizerDelegate_Protocol_h */
