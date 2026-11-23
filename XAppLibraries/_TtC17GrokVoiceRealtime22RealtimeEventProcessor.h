//
#ifndef _TtC17GrokVoiceRealtime22RealtimeEventProcessor_h
#define _TtC17GrokVoiceRealtime22RealtimeEventProcessor_h
@import Foundation;

@class GrokVoiceRealtime.GrokSpeechMessage ?, GrokVoiceRealtime.RealtimeEventProcessorDelegate ?, GrokVoiceRealtime.ResponseState, GrokVoiceRealtime.TranscriptionDeltaTracker, GrokVoiceRealtime.VoiceConversationContextProviding ?, Swift.Bool, _$sSDyS2SG, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.RealtimeEventProcessor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GrokVoiceRealtime.RealtimeEventProcessorDelegate ? delegate;
    GrokVoiceRealtime.VoiceConversationContextProviding ? context;
    GrokVoiceRealtime.ResponseState responseState;
    GrokVoiceRealtime.TranscriptionDeltaTracker transcriptionTracker;
    Swift.Bool hasSentMessageInSession;
    GrokVoiceRealtime.GrokSpeechMessage ? lastMessage;
    [Swift.String : Swift.String] mcpCallResponseIds;
}

@end

#endif /* _TtC17GrokVoiceRealtime22RealtimeEventProcessor_h */
