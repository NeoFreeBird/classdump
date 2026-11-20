//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatSettings29ExternalAppIntegrationsWorker_h
#define _TtC12ChatSettings29ExternalAppIntegrationsWorker_h
@import Foundation;

@class ChatModels.ExternalAppIntegrationsStream, ChatUtilities.ChatExternalAppIntegrationsProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSettings.ExternalAppIntegrationsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatUtilities.ChatExternalAppIntegrationsProviding externalAppIntegrationsProvider;
    ChatModels.ExternalAppIntegrationsStream integrationsStream;
}

@end

#endif /* _TtC12ChatSettings29ExternalAppIntegrationsWorker_h */
