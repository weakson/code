class Animal():
    def __init__(self, Info: list):
        self._name = Info[0]
        self._atk = int (Info[1])
        self._hp = int (Info[2])
        self._defense = int (Info[3])
        self._role = Info[4]
        self._state = "Alive"

    @property
    def name(self):
        return self._name

    @property
    def atk(self):
        return self._atk

    @property
    def hp(self):
        return self._hp

    @property
    def defense(self):
        return self._defense

    @property
    def role(self):
        return self._role

    @property
    def state(self):
        return self._state

    @state.setter
    def state(self, state):
        if state == "Alive" or state == "Dead":
            self._state = state 

    def __str__(self):
        return f"{self._role} {self._name}: {self._hp}"
    
    def been_attack(self, attacker: "Animal"):
        if attacker.state == "Dead" or self.state == "Dead":
            if attacker.state == "Dead":
                print (f"{attacker.name} is already dead")
            if self.state == "Dead":
                print (f"{self.name} is already dead")
            return

        tmp_atk = attacker.atk
        if attacker.role == "Mage":
            tmp_atk += 0.8 * self.atk

        if attacker.role == "Warrior":
            tmp_atk -= self.defense * 0.75
        else:
            tmp_atk -= self.defense

        tmp_atk = int (tmp_atk)

        if tmp_atk > 0:
            if self.role == "Tank":
                self._hp -= int (tmp_atk * 0.5)
            else:
                self._hp -= tmp_atk

        if self.hp <= 0:
            self._hp = 0
            self.state = "Dead"

        return

T, N = map (int, input().split())
Name = {}
for _ in range (N):
    Info = list (input().split())
    tmp = Animal (Info)
    Name[Info[0]] = tmp

for _ in range (T):
    Attacker, Defender = input().split()
    Name[Defender].been_attack (Name[Attacker])

for key, value in Name.items():
    if value.state == "Alive":
        print (value)
