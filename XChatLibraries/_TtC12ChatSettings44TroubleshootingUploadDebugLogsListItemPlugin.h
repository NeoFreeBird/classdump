//
#ifndef _TtC12ChatSettings44TroubleshootingUploadDebugLogsListItemPlugin_h
#define _TtC12ChatSettings44TroubleshootingUploadDebugLogsListItemPlugin_h
@import Foundation;

@class ChatModels.ChatToastActionTriggerStream, ChatModelsCore.ChatHost, ChatSettings.TroubleshootingDebugLogsUploadStream, ChatUtilities.ChatDebugLogsUploading, Swift.Bool, _TtCs12_SwiftObject;

@interface ChatSettings.TroubleshootingUploadDebugLogsListItemPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ChatHost chatHost;
    ChatUtilities.ChatDebugLogsUploading debugLogsUploader;
    Swift.Bool isUploading;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatSettings.TroubleshootingDebugLogsUploadStream uploadStream;
}

@end

#endif /* _TtC12ChatSettings44TroubleshootingUploadDebugLogsListItemPlugin_h */
