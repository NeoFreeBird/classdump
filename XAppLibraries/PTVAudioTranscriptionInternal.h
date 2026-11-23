//
#ifndef PTVAudioTranscriptionInternal_h
#define PTVAudioTranscriptionInternal_h
@import Foundation;

#include "PTVAudioTranscription-Protocol.h"

@class NSArray, NSObject, NSString;

@interface PTVAudioTranscriptionInternal : NSObject <PTVAudioTranscription>

@property (readonly, nonatomic) NSArray *segments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSegments:(id)segments;

@end

#endif /* PTVAudioTranscriptionInternal_h */
