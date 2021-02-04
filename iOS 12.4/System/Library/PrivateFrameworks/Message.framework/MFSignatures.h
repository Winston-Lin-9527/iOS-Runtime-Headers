/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFSignatures : NSObject
+(id)signaturePlainTextFormat:(id)arg1 ;
+(id)stripSignatureMarkup:(id)arg1 ;
+(id)signatureMarkupFormat:(id)arg1 ;
+(id)sharedInstance;
-(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)_getValue:(id)arg1 ;
-(void)_setValue:(id)arg1 value:(void*)arg2 ;
-(id)signatureForAccount:(id)arg1 ;
-(BOOL)useAccountSignatures;
-(void)setSignature:(id)arg1 forAccount:(id)arg2 ;
-(void)clearSignature;
-(void)setUseAccountSignatures:(BOOL)arg1 ;
-(void)setSignature:(id)arg1 forEmailAddress:(id)arg2 ;
-(id)signaturePlainTextForSendingEmailAddress:(id)arg1 ;
-(id)signature;
-(id)signatureMarkupForSendingEmailAddress:(id)arg1 ;
-(id)signatureForSendingEmailAddress:(id)arg1 ;
-(id)defaultSignature;
-(void)setSignature:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
