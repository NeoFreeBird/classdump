//
#ifndef _TtC7CallSFU16CallMediaSession_h
#define _TtC7CallSFU16CallMediaSession_h
@import Foundation;

@class Builtin.DefaultActorStorage, CallMedia.CallAudioRedundancy, CallMedia.CallDiagnosticsStream, CallMedia.CallIceCheckRate, CallMedia.CallMediaRuntime, CallMedia.CallNetworkPreference _$syYbcSg, CallMedia.CallRequestHeaderProvider, CallMedia.CallStateChannelStream, CallMedia.CallVideoLayers, CallMedia.CallVideoTrackStream, CallMedia.LocalParticipantMedia, CallModels.CallConnectionConfiguration ?, CallModels.FeedID, CallModels.LocalMediaStateStream, CallSFU.CallMediaSession.Negotiation, CallSFU.CallMediaSession.Phase, CallSFU.CallSlotConfiguration, CallSFU.CallSlotLayoutStream, CallSFU.CallSlotPinsStream, CallSFU.RtcPollConfiguration, CallSFU.RtcPublisher ?, CallSFU.RtcSignalingClient ?, CallSFU.RtcSubscriber ?, _$s7Combine12AnyPublisherVMn _$syyt _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn CallMedia.CallMediaEvent _$ss5NeverOMn, _$sSSSg, _$sScT -> CallSFU.RtcPublisher ? _$ss5NeverOMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> CallMedia.CallPeerConnectionRole, _$sSh -> CallModels.FeedID, _TtCs12_SwiftObject;

@interface CallSFU.CallMediaSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    CallModels.FeedID publisherFeedID;
    CallMedia.CallRequestHeaderProvider requestHeaderProvider;
    CallMedia.CallMediaRuntime runtime;
    CallMedia.CallVideoTrackStream videoTracks;
    CallMedia.LocalParticipantMedia localParticipant;
    CallModels.LocalMediaStateStream localMediaState;
    CallMedia.CallDiagnosticsStream diagnostics;
    CallMedia.CallStateChannelStream stateChannels;
    Swift.Set -> CallModels.FeedID previousFeedIDs;
    CallSFU.CallSlotConfiguration slotConfiguration;
    CallSFU.CallSlotLayoutStream slotLayouts;
    CallSFU.CallSlotPinsStream slotPins;
    CallMedia.CallVideoLayers videoLayers;
    CallMedia.CallAudioRedundancy audioRedundancy;
    CallSFU.RtcPollConfiguration pollConfiguration;
    Swift.String? http3Host;
    CallMedia.CallNetworkPreference _$syYbcSg networkPreference;
    CallMedia.CallIceCheckRate iceCheckRate;
    nominal type descriptor for Combine.AnyPublisher  empty-list () nominal type descriptor for Swift.Never networkChanges;
    CallModels.CallConnectionConfiguration ? boundConfiguration;
    nominal type descriptor for Combine.PassthroughSubject CallMedia.CallMediaEvent nominal type descriptor for Swift.Never eventSubject;
    CallSFU.CallMediaSession.Phase phase;
    CallSFU.CallMediaSession.Negotiation negotiation;
    CallModels.CallConnectionConfiguration ? configuration;
    Swift.Task -> CallSFU.RtcPublisher ? nominal type descriptor for Swift.Never ? preparation;
    CallSFU.RtcSignalingClient ? client;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? signalingTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? networkChangesTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? remoteVideoTracksTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pinsTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? cameraMediaLineTask;
    CallSFU.RtcPublisher ? publisher;
    CallSFU.RtcSubscriber ? subscriber;
    Swift.Set -> CallMedia.CallPeerConnectionRole connectedPeerRoles;
}

@end

#endif /* _TtC7CallSFU16CallMediaSession_h */
