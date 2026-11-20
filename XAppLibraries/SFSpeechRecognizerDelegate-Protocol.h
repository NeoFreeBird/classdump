//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
