//
#ifndef _TtC10CallEngine4Call_h
#define _TtC10CallEngine4Call_h
@import Foundation;

@class CallEngine.CallBitrateGraphStream, CallEngine.CallConnectionQualityStream, CallEngine.CallDebugLogStream, CallEngine.CallDisplayStatusStream, CallEngine.CallMediaPermissionRequestStream, CallEngine.CallMediaPermissionStream, CallEngine.CallReconnectingToneStream, CallEngine.CallSimulcastGraphStream, CallEngine.CallWorkerPluginPoint, CallMedia.CallCaptureSessionStream, CallMedia.CallDiagnosticsStream, CallMedia.CallVideoTrackStream, CallModels.CallActiveSpeakerStream, CallModels.CallAudioRouteStream, CallModels.CallCapabilityStream, CallModels.CallCaptureConsentStream, CallModels.CallCaptureNoticeStream, CallModels.CallConfiguration, CallModels.CallConnectionStateStream, CallModels.CallIDStream, CallModels.CallOutgoingProgressStream, CallModels.CallParticipantsStream, CallModels.CallPhaseStream, CallModels.CallPinnedParticipantsStream, CallModels.CallRaisedHandStream, CallModels.CallReactionStream, CallModels.CallSessionActionTriggerStream, CallModels.LocalHandRaiseStream, CallModels.LocalMediaStateStream, _$s10Foundation4UUIDVMn, _$s11XFoundation11TimerStreamCMn, _$sSS, _TtCs12_SwiftObject;

@interface CallEngine.Call : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.UUID id;
    Swift.String accountID;
    CallModels.CallConfiguration configuration;
    CallModels.CallConnectionStateStream connectionState;
    CallEngine.CallReconnectingToneStream reconnectingTone;
    CallEngine.CallConnectionQualityStream connectionQuality;
    CallEngine.CallDisplayStatusStream displayStatus;
    CallModels.CallIDStream callID;
    CallModels.CallParticipantsStream participants;
    CallModels.CallActiveSpeakerStream activeSpeakers;
    CallModels.CallRaisedHandStream raisedHands;
    CallModels.CallPinnedParticipantsStream pinnedParticipants;
    CallModels.CallPhaseStream phase;
    CallModels.CallOutgoingProgressStream outgoingProgress;
    CallModels.CallCaptureNoticeStream captureNotice;
    CallModels.CallCaptureConsentStream captureConsent;
    CallModels.LocalMediaStateStream localMedia;
    CallModels.LocalHandRaiseStream localHand;
    CallModels.CallCapabilityStream capabilities;
    CallModels.CallReactionStream reactions;
    CallEngine.CallMediaPermissionStream mediaPermissions;
    CallEngine.CallMediaPermissionRequestStream mediaPermissionRequests;
    CallModels.CallAudioRouteStream audioRoute;
    CallModels.CallSessionActionTriggerStream actions;
    CallMedia.CallVideoTrackStream videoTracks;
    CallMedia.CallCaptureSessionStream captureSession;
    nominal type descriptor for XFoundation.TimerStream timer;
    CallEngine.CallDebugLogStream debugLog;
    CallEngine.CallBitrateGraphStream bitrateGraph;
    CallEngine.CallSimulcastGraphStream simulcastGraph;
    CallMedia.CallDiagnosticsStream diagnostics;
    CallEngine.CallWorkerPluginPoint workerPluginPoint;
}

@end

#endif /* _TtC10CallEngine4Call_h */
