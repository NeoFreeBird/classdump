//
#ifndef PTVRTMPVideoSender_h
#define PTVRTMPVideoSender_h
@import Foundation;

#include "PTVRTMPHandlerDelegate-Protocol.h"
#include "PTVRTMPTypeHandler-Protocol.h"

@class NSData, NSObject, NSString;

@interface PTVRTMPVideoSender : NSObject <PTVRTMPTypeHandler> {
    /* instance variables */
    NSObject<PTVRTMPHandlerDelegate> *_delegate;
    NSData *_config;
    NSString *_paramSets;
    NSString *_profile_level_id;
    int _lengthSize;
    _Bool _seenIDR;
}

@property (readonly) int width;
@property (readonly) int height;
@property (readonly) NSString *codecID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfigData:(id)data;
- (void)setDelegate:(id)delegate;
- (id)getTrackInfo;
- (void)sendHeader;
- (void)onDiscont;
- (void)sendData:(id)data pts:(double)pts decodeAt:(double)at;

@end

#endif /* PTVRTMPVideoSender_h */
