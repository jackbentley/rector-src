<?php

namespace Rector\Tests\Privatization\Rector\Class_\ChangeGlobalVariablesToPropertiesRector\Fixture;

class Fixture
{
    public function go()
    {
        global $variable;
        $variable = 5;
    }

    public function run()
    {
        global $variable;
        var_dump($variable);
    }
}

?>
-----
<?php

namespace Rector\Tests\Privatization\Rector\Class_\ChangeGlobalVariablesToPropertiesRector\Fixture;

class Fixture
{
    private $variable;
    public function go()
    {
        $this->variable = 5;
    }

    public function run()
    {
        var_dump($this->variable);
    }
}

?>
