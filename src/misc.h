typedef enum
{
    distPlayer,
    distHeld,
    distHeldContained,
    distLocation,
    distHere,
    distHereContained,
    distOverthere,
    distNotHere,
    distUnknownObject,
    distNoObjectSpecified
} DISTANCE;

extern OBJECT *getPassageTo(OBJECT *targetLocation);
extern OBJECT *parseObject(const char *noun);
extern OBJECT *personHere(void);
extern DISTANCE distanceTo(OBJECT *obj);
extern int listObjsAtLoc(OBJECT *location);
