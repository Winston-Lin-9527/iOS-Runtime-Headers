/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMOutgoingHomeInvitation, NSString;

@interface HFOutgoingHomeInvitationItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMOutgoingHomeInvitation* _outgoingInvitation;

}

@property (nonatomic,readonly) HMOutgoingHomeInvitation * outgoingInvitation;              //@synthesize outgoingInvitation=_outgoingInvitation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)initWithOutgoingInvitation:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMOutgoingHomeInvitation *)outgoingInvitation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
