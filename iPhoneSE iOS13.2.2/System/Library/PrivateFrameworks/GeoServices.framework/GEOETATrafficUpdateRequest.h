/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOLocation, NSMutableArray, NSData, NSString, GEORouteAttributes, GEOTrafficTrafficApiResponse, GEOTFTrafficSnapshot;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTimepoint _clientTimepoint;
	GEOSessionID _sessionID;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypointTypeds;
	NSData* _directionsResponseID;
	NSString* _requestingAppId;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	double _sessionRelativeTimestamp;
	NSData* _sessionState;
	GEOTrafficTrafficApiResponse* _trafficApiResponse;
	NSMutableArray* _trafficSnapshotIds;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	NSData* _tripID;
	NSString* _xpcUuid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxAlternateRouteCount;
	unsigned _previouslyRejectedRerouteSavings;
	int _rerouteStatus;
	BOOL _includeBetterRouteSuggestion;
	BOOL _needServerLatency;
	BOOL _useClientTimepointAsNow;
	BOOL _useLiveTrafficAsFallback;
	struct {
		unsigned has_clientTimepoint : 1;
		unsigned has_sessionID : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_maxAlternateRouteCount : 1;
		unsigned has_previouslyRejectedRerouteSavings : 1;
		unsigned has_rerouteStatus : 1;
		unsigned has_includeBetterRouteSuggestion : 1;
		unsigned has_needServerLatency : 1;
		unsigned has_useClientTimepointAsNow : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_commonOptions : 1;
		unsigned read_currentUserLocation : 1;
		unsigned read_destinationWaypointTypeds : 1;
		unsigned read_directionsResponseID : 1;
		unsigned read_requestingAppId : 1;
		unsigned read_routeAttributes : 1;
		unsigned read_routes : 1;
		unsigned read_serviceTags : 1;
		unsigned read_sessionState : 1;
		unsigned read_trafficApiResponse : 1;
		unsigned read_trafficSnapshotIds : 1;
		unsigned read_trafficSnapshot : 1;
		unsigned read_tripID : 1;
		unsigned read_xpcUuid : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clientTimepoint : 1;
		unsigned wrote_sessionID : 1;
		unsigned wrote_abClientMetadata : 1;
		unsigned wrote_additionalEnabledMarkets : 1;
		unsigned wrote_clientCapabilities : 1;
		unsigned wrote_commonOptions : 1;
		unsigned wrote_currentUserLocation : 1;
		unsigned wrote_destinationWaypointTypeds : 1;
		unsigned wrote_directionsResponseID : 1;
		unsigned wrote_requestingAppId : 1;
		unsigned wrote_routeAttributes : 1;
		unsigned wrote_routes : 1;
		unsigned wrote_serviceTags : 1;
		unsigned wrote_sessionRelativeTimestamp : 1;
		unsigned wrote_sessionState : 1;
		unsigned wrote_trafficApiResponse : 1;
		unsigned wrote_trafficSnapshotIds : 1;
		unsigned wrote_trafficSnapshot : 1;
		unsigned wrote_tripID : 1;
		unsigned wrote_xpcUuid : 1;
		unsigned wrote_maxAlternateRouteCount : 1;
		unsigned wrote_previouslyRejectedRerouteSavings : 1;
		unsigned wrote_rerouteStatus : 1;
		unsigned wrote_includeBetterRouteSuggestion : 1;
		unsigned wrote_needServerLatency : 1;
		unsigned wrote_useClientTimepointAsNow : 1;
		unsigned wrote_useLiveTrafficAsFallback : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasClientTimepoint; 
@property (assign,nonatomic) GEOTimepoint clientTimepoint; 
@property (assign,nonatomic) BOOL hasUseClientTimepointAsNow; 
@property (assign,nonatomic) BOOL useClientTimepointAsNow; 
@property (assign,nonatomic) BOOL hasNeedServerLatency; 
@property (assign,nonatomic) BOOL needServerLatency; 
@property (nonatomic,readonly) BOOL hasXpcUuid; 
@property (nonatomic,retain) NSString * xpcUuid; 
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation; 
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes; 
@property (assign,nonatomic) BOOL hasIncludeBetterRouteSuggestion; 
@property (assign,nonatomic) BOOL includeBetterRouteSuggestion; 
@property (nonatomic,retain) NSMutableArray * routes; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds; 
@property (assign,nonatomic) BOOL hasPreviouslyRejectedRerouteSavings; 
@property (assign,nonatomic) unsigned previouslyRejectedRerouteSavings; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (assign,nonatomic) BOOL hasRerouteStatus; 
@property (assign,nonatomic) int rerouteStatus; 
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (assign,nonatomic) BOOL hasMaxAlternateRouteCount; 
@property (assign,nonatomic) unsigned maxAlternateRouteCount; 
@property (nonatomic,readonly) BOOL hasTripID; 
@property (nonatomic,retain) NSData * tripID; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,readonly) BOOL hasTrafficApiResponse; 
@property (nonatomic,retain) GEOTrafficTrafficApiResponse * trafficApiResponse; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshotIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(Class)trafficSnapshotIdsType;
+(Class)routeType;
+(Class)destinationWaypointTypedType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)clearSensitiveFields;
-(NSData *)tripID;
-(void)_readRouteAttributes;
-(void)_readCurrentUserLocation;
-(void)_readClientCapabilities;
-(void)_readAdditionalEnabledMarkets;
-(void)_readSessionState;
-(void)_readCommonOptions;
-(void)_readAbClientMetadata;
-(void)_readServiceTags;
-(void)_addNoFlagsServiceTag:(id)arg1 ;
-(void)_readTrafficApiResponse;
-(void)_readTrafficSnapshotIds;
-(void)_addNoFlagsTrafficSnapshotIds:(id)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(GEOLocation *)currentUserLocation;
-(GEOClientCapabilities *)clientCapabilities;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(GEOCommonOptions *)commonOptions;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(GEOTrafficTrafficApiResponse *)trafficApiResponse;
-(NSMutableArray *)trafficSnapshotIds;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(BOOL)hasCurrentUserLocation;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(void)setTrafficApiResponse:(GEOTrafficTrafficApiResponse *)arg1 ;
-(unsigned long long)trafficSnapshotIdsCount;
-(void)clearTrafficSnapshotIds;
-(id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficSnapshotIds:(id)arg1 ;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)_readTrafficSnapshot;
-(BOOL)hasRouteAttributes;
-(BOOL)hasClientCapabilities;
-(double)sessionRelativeTimestamp;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasSessionState;
-(BOOL)hasCommonOptions;
-(BOOL)hasAbClientMetadata;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(BOOL)hasTrafficApiResponse;
-(void)setTrafficSnapshotIds:(NSMutableArray *)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(void)_readRoutes;
-(void)_addNoFlagsRoute:(id)arg1 ;
-(unsigned long long)routesCount;
-(void)clearRoutes;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(void)addRoute:(id)arg1 ;
-(NSMutableArray *)routes;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)_readRequestingAppId;
-(NSString *)requestingAppId;
-(BOOL)hasRequestingAppId;
-(void)_readDestinationWaypointTypeds;
-(void)_addNoFlagsDestinationWaypointTyped:(id)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(unsigned long long)destinationWaypointTypedsCount;
-(void)clearDestinationWaypointTypeds;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(BOOL)needServerLatency;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasNeedServerLatency;
-(GEOTimepoint)clientTimepoint;
-(void)setClientTimepoint:(GEOTimepoint)arg1 ;
-(void)setHasClientTimepoint:(BOOL)arg1 ;
-(BOOL)hasClientTimepoint;
-(BOOL)useClientTimepointAsNow;
-(void)setUseClientTimepointAsNow:(BOOL)arg1 ;
-(void)setHasUseClientTimepointAsNow:(BOOL)arg1 ;
-(BOOL)hasUseClientTimepointAsNow;
-(BOOL)hasXpcUuid;
-(void)setXpcUuid:(NSString *)arg1 ;
-(void)setTripID:(NSData *)arg1 ;
-(void)setMaxAlternateRouteCount:(unsigned)arg1 ;
-(unsigned)maxAlternateRouteCount;
-(void)setHasMaxAlternateRouteCount:(BOOL)arg1 ;
-(BOOL)hasMaxAlternateRouteCount;
-(void)_readTripID;
-(NSString *)xpcUuid;
-(void)_readXpcUuid;
-(BOOL)includeBetterRouteSuggestion;
-(void)setIncludeBetterRouteSuggestion:(BOOL)arg1 ;
-(void)setHasIncludeBetterRouteSuggestion:(BOOL)arg1 ;
-(BOOL)hasIncludeBetterRouteSuggestion;
-(unsigned)previouslyRejectedRerouteSavings;
-(void)setPreviouslyRejectedRerouteSavings:(unsigned)arg1 ;
-(void)setHasPreviouslyRejectedRerouteSavings:(BOOL)arg1 ;
-(BOOL)hasPreviouslyRejectedRerouteSavings;
-(int)rerouteStatus;
-(void)setRerouteStatus:(int)arg1 ;
-(void)setHasRerouteStatus:(BOOL)arg1 ;
-(BOOL)hasRerouteStatus;
-(id)rerouteStatusAsString:(int)arg1 ;
-(int)StringAsRerouteStatus:(id)arg1 ;
-(BOOL)hasTripID;
@end
