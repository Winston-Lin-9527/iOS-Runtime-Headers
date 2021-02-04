/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SFAirDropViewServiceHostProtocol.h>

@protocol SFAirDropViewServiceHostProtocol, NSCopyingNSObject;
@class NSExtension, NSString;

@interface _SFAirDropRemoteViewController : _UIRemoteViewController <SFAirDropViewServiceHostProtocol> {

	id<SFAirDropViewServiceHostProtocol> _airDropHost;
	NSExtension* _extension;
	id<NSCopying><NSObject> _extensionRequestIdentifier;

}

@property (assign,nonatomic,__weak) id<SFAirDropViewServiceHostProtocol> airDropHost;              //@synthesize airDropHost=_airDropHost - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                              //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject> extensionRequestIdentifier;                     //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)airDropViewServiceRequestingSharedItemsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)airDropViewServiceDidRequestDismissal;
-(id<SFAirDropViewServiceHostProtocol>)airDropHost;
-(id)airDropExtensionService;
-(void)setAirDropHost:(id<SFAirDropViewServiceHostProtocol>)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying><NSObject>)extensionRequestIdentifier;
@end
