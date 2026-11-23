//
#ifndef PTVRTMPAudioSender_h
#define PTVRTMPAudioSender_h
@import Foundation;

#include "PTVRTMPHandlerDelegate-Protocol.h"
#include "PTVRTMPTypeHandler-Protocol.h"

@class NSData, NSObject, NSString;

@interface PTVRTMPAudioSender : NSObject <PTVRTMPTypeHandler> {
    /* instance variables */
    NSData *_config;
    NSObject<PTVRTMPHandlerDelegate> *_delegate;
}

@property (readonly) int channels;
@property (readonly) int sampleRate;
@property (readonly) NSString *codecID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfigData:(id)data;
- (id)getTrackInfo;
- (void)setDelegate:(id)delegate;
- (void)sendHeader;
- (void)onDiscont;
- (void)sendData:(id)data pts:(double)pts decodeAt:(double)at;

@end

#endif /* PTVRTMPAudioSender_h */
