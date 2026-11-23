//
#ifndef PTVWebRTCVoiceTransformer_h
#define PTVWebRTCVoiceTransformer_h
@import Foundation;

#include "PTVWebRTCVoiceTransformerDelegate-Protocol.h"
#include "TLabsAudioProcessorDelegate-Protocol.h"

@class NSObject, NSString;

@interface PTVWebRTCVoiceTransformer : NSObject <TLabsAudioProcessorDelegate>

@property (weak, nonatomic) id <PTVWebRTCVoiceTransformerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedVoiceTransformer;
+ (void)load;
+ (long long)currentSettingPreference;
+ (void)setCurrentSettingPreference:(long long)preference;
+ (void)setVoiceTransformerProcessingEnabled:(_Bool)enabled;
+ (_Bool)voiceTransformerProcessingEnabled;
+ (void)setSoundboardEnabled:(_Bool)enabled;
+ (_Bool)soundboardEnabled;
+ (void)setVoiceTransformerPitch:(float)pitch;
+ (float)voiceTransformerPitch;
+ (void)setVoiceReverbEnabled:(_Bool)enabled;
+ (_Bool)voiceTransformerReverbEnabled;
+ (void)setVoiceTransformertReverbWetMix:(float)mix dryMix:(float)mix damp:(float)damp roomSize:(float)size width:(float)width;
+ (void)voiceTransformSampleBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void *x2; } x[1]; } *)buffer asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;

/* instance methods */
- (_Bool)tlabsAudioStream:(unsigned int)stream audioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void *x2; } x[1]; } *)list asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (void)tlabsAudioStreamDidReceiveAudioBufferPeak:(id)peak;

@end

#endif /* PTVWebRTCVoiceTransformer_h */
