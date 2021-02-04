/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/FLExtensionHostContextInterface.h>

@protocol FLExtensionHostContextInterface;
@class NSString;

@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface> {

	id<FLExtensionHostContextInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<FLExtensionHostContextInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)extensionDidFinish;
-(id)remoteContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<FLExtensionHostContextInterface>)arg1 ;
-(id<FLExtensionHostContextInterface>)delegate;
@end
