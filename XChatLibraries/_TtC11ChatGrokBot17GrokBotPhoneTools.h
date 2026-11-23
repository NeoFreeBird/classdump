//
#ifndef _TtC11ChatGrokBot17GrokBotPhoneTools_h
#define _TtC11ChatGrokBot17GrokBotPhoneTools_h
@import Foundation;

@class ChatGrokBot.GrokBotPhoneMachineInstall ?, ChatGrokBot.GrokBotPhoneToolRegistry, ChatUtilities.ChatAccountUserDefaulting, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySDySS ChatGrokBot.GrokBotPhoneToolState _$sG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySh -> ChatGrokBot.GrokBotPhonePermission _$sG _$ss5NeverOMn, _$sSS, _$sSh -> ChatGrokBot.GrokBotPhonePermission, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotPhoneTools : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPhoneToolRegistry registry;
    ChatGrokBot.GrokBotPhoneMachineInstall ? $__lazy_storage_$_install;
    Swift.String accountID;
    ChatUtilities.ChatAccountUserDefaulting chatAccountDefaults;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Set -> ChatGrokBot.GrokBotPhonePermission _$sG nominal type descriptor for Swift.Never limitedPermissionsSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotPhoneToolState _$sG nominal type descriptor for Swift.Never statesSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never toolsChangedSubject;
    Swift.Set -> ChatGrokBot.GrokBotPhonePermission allowingPermissions;
    Swift.Int publishedRead;
    Swift.Int readCount;
}

@end

#endif /* _TtC11ChatGrokBot17GrokBotPhoneTools_h */
